#ifndef XAUDIOTRACK_H
#define XAUDIOTRACK_H

#include <iostream>
#include <string>

class XAudioTrack
{
    std::string m_TrackTitle;
    int m_TrackLength; // in seconds
                  // it is easy display/ or get min and seconds
                  // without create uncessary variables


public:
    XAudioTrack();
    XAudioTrack(std::string const TrackTitle, int TrackLength);

    // Mutator Functions
    void SetTrackTitle(std::string TrackTitle);
    void SetTrackLength(int TrackLength);

    // Acessor Functions
    const std::string& GetTrackName() const;

    //Aux
    int GetTrackLength() const;


};

#endif // XAUDIOTRACK_H
