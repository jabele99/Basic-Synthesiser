/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class JacksonsSynthesiserAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    JacksonsSynthesiserAudioProcessorEditor (JacksonsSynthesiserAudioProcessor&);
    ~JacksonsSynthesiserAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JacksonsSynthesiserAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JacksonsSynthesiserAudioProcessorEditor)
};
