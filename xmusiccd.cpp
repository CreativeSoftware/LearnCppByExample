#include "xmusiccd.h"

XMusicCD::XMusicCD()
{}

XMusicCD::XMusicCD(std::string CdTitle, std::vector<XAudioTrack> Audiotracks)
    :m_CdTitle(std::move(CdTitle)),
    m_AudioTracks(std::move(Audiotracks))
{}

const std::string& XMusicCD::GetCdTitle() const{
    return m_CdTitle;
}

const std::vector<XAudioTrack>& XMusicCD::GetCdTracks() const{
    return m_AudioTracks;
}


void XMusicCD::SetMusicCdTitle(std::string CdTitle){
    m_CdTitle = std::move(CdTitle);
}

void XMusicCD::AddTrack(XAudioTrack NewAudioTrack){

    m_AudioTracks.emplace_back(std::move(NewAudioTrack));

}

int XMusicCD::GetLenght() const {

    int sum=0;

    auto && MyTracks = this->GetCdTracks();

            for (auto && elem : MyTracks)
            {
                sum+= elem.GetTrackLength();

            }

        return sum;

}
