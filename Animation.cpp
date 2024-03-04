#include "Animation.h"

Animation::Animation()
{
	this->m_model_mat = glm::mat4(1.0f);
}

Animation::~Animation()
{
}

void Animation::init()
{
	reset();
}

void Animation::update(float delta_time)
{
	m_model_mat = glm::mat4(1.0f);
	m_model_mat = glm::translate(m_model_mat, glm::vec3(5.0f, 0.0f, 0.0f));
	m_model_mat = glm::rotate(m_model_mat, a, glm::vec3(5.0f, 0.0f, 0.0f));
	m_model_mat = glm::rotate(m_model_mat, b, glm::vec3(5.0f, 0.0f, 0.0f));
}

void Animation::reset()
{
	m_model_mat = glm::mat4(1.0f);
	m_model_mat = glm::translate(m_model_mat, glm::vec3(5.0f, 0.0f, 0.0f));
	m_model_mat = glm::rotate(m_model_mat, 0.0f, glm::vec3(5.0f, 0.0f, 0.0f));
} 

void Animation::rotateX() 
{
	m_model_mat = glm::rotate(m_model_mat, a, glm::vec3(1.0f, 0.0f, 0.0f));
}

void Animation::rotateY() 
{
	m_model_mat = glm::rotate(m_model_mat, b, glm::vec3(1.0f, 0.0f, 0.0f));
}
