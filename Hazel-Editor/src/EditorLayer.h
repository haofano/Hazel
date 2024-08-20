#pragma once

#include "Hazel.h"

namespace Hazel {

	class EditorLayer : public Hazel::Layer
	{
	public:
		EditorLayer();
		virtual ~EditorLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;

		void OnUpdate(Timestep ts) override;
		virtual void OnImGuiRender() override;
		void OnEvent(Event& e) override;
	private:
		Hazel::OrthographicCameraController m_CameraController;

		Hazel::Ref<Hazel::VertexArray> m_SquareVA;
		Hazel::Ref<Hazel::Shader> m_FlatColorShader;
		Hazel::Ref<Hazel::Framebuffer> m_Framebuffer;

		Hazel::Ref<Hazel::Texture2D> m_CheckerboardTexture;

		glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
	};
}