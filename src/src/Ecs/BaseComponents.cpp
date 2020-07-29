#include "Ecs/BaseComponents.h"

void BaseRenderComponent::preDraw(glm::mat4 PV){
    m_shader.bind();
    glm::mat4 M = std::static_pointer_cast<BaseDataComponent>(getParentEntity()->getLastComponentByBasename("BaseDataComponent"))->getModelMatrix();
    m_shader.setMat4("MVP", PV*M);
}