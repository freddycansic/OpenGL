#include "Shape.h"

#include "maths/Mat4.h"
#include "maths/Maths.h"

void Shape::recalculateVertices() {
	if (m_Vertices.size() == 0) { // if recalculating from the constructor
		m_Vertices = getUnitVertices(); // first fill vector with modifiable values for later
	}

	Mat4 transformMatrix = Mat4::identity.translate(m_Transform.tra.x, m_Transform.tra.y, m_Transform.tra.z).rotate(m_Transform.rot.x, m_Transform.rot.y, m_Transform.rot.z).scale(m_Transform.sca.x, m_Transform.sca.y, m_Transform.sca.z);

	// TODO copy bad
	const std::vector<Vertex>& unitVertices = getUnitVertices();

	for (unsigned int i = 0; i < unitVertices.size(); i++) {
		const auto unitPos = unitVertices.at(i).position; // unit pos
		auto& resultPos = m_Vertices.at(i).position; // result vertex
		
		// apply transformation to unit vertex and store in result vertex
		resultPos = Vec3(Vec4(unitPos, 1.0f) * transformMatrix);
	}
}

void Shape::setScale(float xScale, float yScale, float zScale) {
	m_Transform.sca = { xScale, yScale, zScale };
}

void Shape::setRotation(float xRotation, float yRotation, float zRotation) {
	m_Transform.rot = { Maths::radians(xRotation), Maths::radians(yRotation), Maths::radians(zRotation) };
}

void Shape::setTranslation(float xTranslate, float yTranslate, float zTranslate) {
	m_Transform.tra = { xTranslate, yTranslate, zTranslate };
}