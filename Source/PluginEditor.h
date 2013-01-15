/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#ifndef __PLUGINEDITOR_H_802EEC4F__
#define __PLUGINEDITOR_H_802EEC4F__

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class BeatCounterAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    BeatCounterAudioProcessorEditor (BeatCounterAudioProcessor* ownerFilter);
    ~BeatCounterAudioProcessorEditor();

    //==============================================================================
    // This is just a standard Juce paint method...
    void paint (Graphics& g);
};


#endif  // __PLUGINEDITOR_H_802EEC4F__