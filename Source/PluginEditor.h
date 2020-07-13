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
class SimpleSamplerAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    SimpleSamplerAudioProcessorEditor (SimpleSamplerAudioProcessor&);
    ~SimpleSamplerAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::TextButton mLoadButton {" Load Sample "};
    
    SimpleSamplerAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SimpleSamplerAudioProcessorEditor)
};
