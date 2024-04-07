/*
  ==============================================================================

    OpenGLComponent.cpp
    Created: 7 Apr 2024 9:22:44pm
    Author:  Ananthakrishnan

  ==============================================================================
*/

#include <JuceHeader.h>
#include "OpenGLComponent.h"

//==============================================================================
OpenGLComponent::OpenGLComponent()
{
    setOpaque(true);
    openGLContext.setRenderer(this);
    openGLContext.setContinuousRepainting(true);
    openGLContext.attachTo(*this);
}

OpenGLComponent::~OpenGLComponent()
{
    openGLContext.detach();
}

void OpenGLComponent::newOpenGLContextCreated()
{
}

void OpenGLComponent::renderOpenGL()
{
}

void OpenGLComponent::openGLContextClosing()
{
}

void OpenGLComponent::paint (juce::Graphics& g)
{
}

void OpenGLComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
