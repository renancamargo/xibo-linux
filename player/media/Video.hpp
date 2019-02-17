#pragma once

#include "Media.hpp"

class IVideoHandler;
class FilePath;

class Video : public Media, public IVisible, public IPlayable
{
public:
    void play() override;
    void stop() override;

    void scale(double, double) override;
    int width() const override;
    int height() const override;

    void setLooped(bool looped);
    bool looped() const;
    void setMuted(bool muted);

    MediaGeometry::Align align() const override;
    MediaGeometry::Valign valign() const override;
    MediaGeometry::ScaleType scaleType() const override;

    IWidgetAdaptor& handler() override;
    void handleEvent(const Event& ev) override;

protected:
    void show() override { }
    void hide() override { }

private:
    friend class VideoBuilder;

    Video(int id, int width, int height, const FilePath& path, std::unique_ptr<IVideoHandler>&& handler);

    void onVideoFinished();

private:
    std::unique_ptr<IVideoHandler> m_handler;
    bool m_looped = false;

};
