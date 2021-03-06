#pragma once

#include "Shape.h"

class Cube : public Shape
{
private:
	const static std::vector<unsigned int> s_UnitIndices;
	const static std::vector<Vertex> s_UnitVertices;

	float m_Size = 0.0f;

public:
	Cube(float x, float y, float z, float size);
	Cube(const Vec3& pos, float size);
	Cube() = default;

	std::vector<Vertex>& getVertices() override;
	const std::vector<Vertex>& getUnitVertices() const override;
	const std::vector<unsigned int>& getIndices() const override;
	void setScale(float xScale, float yScale, float zScale) override;
};


