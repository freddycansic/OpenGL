#pragma once

#include <vector>

#include "engine/rendering/Vertex.h"
#include "maths/Transform.h"

class Shape
{
protected:
	/**
	* @brief Current transform from the unit shape. 
	**/
	Transform m_Transform;

	/**
	 * @brief All vertices that the shape comprises of.
	*/
	std::vector<Vertex> m_Vertices;

public:
	Shape() = default;

	/**
	 * @brief Recalculates the positions of a shape's vertices using values from its m_Transform.
	*/
	void recalculateVertices();
	
	/**
	 * @brief Get all the vertices which describe the unit shape.
	 * @return A vector of vertices which describe the unit shape.
	 * @see Cube#getUnitVertices()
	 * @see Rectangle#getUnitVertices()
	*/
	virtual std::vector<Vertex> getUnitVertices() const = 0;

	/**
	 * @brief Get all the vertices of the shape.
	 * @return A vector of the shape's vertices.
	*/
	virtual std::vector<Vertex> getVertices() = 0;

	/**
	 * @brief Get all the indices of the shape.
	 * @return A vector of the shape's indices.
	*/
	virtual std::vector<unsigned int> getIndices() const = 0;

	/**
	 * @brief Set the scale for the shape.
	 * @param xScale The scale on the x axis
	 * @param yScale The scale on the y axis
	 * @param zScale The scale on the z axis
	*/
	virtual void setScale(float xScale, float yScale, float zScale);
	
	/**
	 * @brief Set the rotation for the shape about the centre of mass of the shape.
	 * @param xScale The rotation on the x axis
	 * @param yScale The rotation on the y axis
	 * @param zScale The rotation on the z axis
	*/
	virtual void setRotation(float xRotation, float yRotation, float zRotation);
	
	/**
	 * @brief Set the translation for the shape about the origin.
	 * @param xScale The translation on the x axis
	 * @param yScale The translation on the y axis
	 * @param zScale The translation on the z axis
	*/
	virtual void setTranslation(float xTranslate, float yTranslate, float zTranslate);
};