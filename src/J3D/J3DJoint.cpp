#include "J3D/J3DJoint.hpp"
#include "J3D/J3DMaterial.hpp"
#include "J3D/J3DTexture.hpp"

glm::mat4 J3DJoint::GetTransformMatrix() {
	J3DJoint* p = this;
	glm::mat4 completeTransform = glm::identity<glm::mat4>();

	while (p != nullptr) {
		completeTransform = p->mTransform.ToMat4() * completeTransform;
		p = (J3DJoint*)p->mParent;
	}

	return completeTransform;
}

void J3DJoint::RenderRecursive(std::vector<std::shared_ptr<struct J3DTexture>>& textures) {
	//for (auto a : mMaterials) {
	//	//a->Render(textures);
	//}

	//for (auto c : mChildren) {
	//	static_cast<J3DJoint*>(c)->RenderRecursive(textures);
	//}
}
