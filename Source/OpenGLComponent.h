/*
  ==============================================================================

    OpenGLComponent.h
    Created: 7 Apr 2024 9:22:44pm
    Author:  Ananthakrishnan

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class OpenGLComponent : public juce::Component, public juce::OpenGLRenderer, public juce::OpenGLContext
{
public:
    OpenGLComponent();
    ~OpenGLComponent() override;

    void newOpenGLContextCreated() override;
    void renderOpenGL() override;
    void openGLContextClosing()override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //creating a struct for Vertex helps us to add more attributes down the line easily.
    struct Vertex 
    {
        //x & y values
        float position[2];
        //rgb & alpha
        float colour[4];
    };
    
    std::vector<Vertex> vertexBuffer;
    std::vector<unsigned int> indexBuffer;

    GLuint vertexBufferID;
    GLuint indexBufferID; 
    OpenGLContext openGLContext;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OpenGLComponent)
};
