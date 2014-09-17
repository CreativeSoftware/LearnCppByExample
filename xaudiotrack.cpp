#include "xaudiotrack.h"

XAudioTrack::XAudioTrack()
{
}

XAudioTrack::XAudioTrack(const std::string TrackTitle, int TrackLength):
    m_TrackTitle(std::move(TrackTitle)),
    m_TrackLength(std::move(TrackLength))
{}


const std::string& XAudioTrack::GetTrackName(void) const {
    return m_TrackTitle; }


int XAudioTrack::GetTrackLength() const {
    return m_TrackLength; }


void XAudioTrack::SetTrackTitle(std::string TrackTitle) {
    m_TrackTitle = std::move(TrackTitle); }


void XAudioTrack::SetTrackLength(int TrackLength) {
      m_TrackLength = std::move(TrackLength);

}
