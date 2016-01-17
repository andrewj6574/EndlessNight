#pragma once

#include "renderable.h"
#include "font_manager.h"

class Label : public Renderable
{
public:
	Label(std::string text, float x, float y, Font* font, glm::vec4 colour);
	Label(std::string text, float x, float y, const std::string& font, glm::vec4 colour);

	void submit(BatchRenderer& renderer) const override;

public:
	Font* m_Font;
	std::string text;
	glm::vec3& position;
	float x;
	float y;

};
