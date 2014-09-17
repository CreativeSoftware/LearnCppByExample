#ifndef XMUSICCD_H
#define XMUSICCD_H

#include <vector>

#include "xaudiotrack.h"

class XMusicCD
{
    std::string m_CdTitle;
    std::vector <XAudioTrack> m_AudioTracks;
public:
    XMusicCD();
    XMusicCD(std::string CdTitle, std::vector <XAudioTrack> Audiotracks);

    //Mutators
    void SetMusicCdTitle(std::string CdTitle );

    //Accessors
    const std::string& GetCdTitle() const;
    const std::vector<XAudioTrack>& GetCdTracks() const;


    //Auxliary Functions

    void AddTrack(XAudioTrack NewAudioTrack);

    int GetLenght() const;



};

#endif // XMUSICCD_H


