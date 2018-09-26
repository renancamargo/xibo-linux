#include "MediaContainerFactory.hpp"

#include "control/MediaContainer.hpp"
#include "adaptors/GtkFixedLayoutAdaptor.hpp"

MediaContainerFactory::MediaContainerFactory(const xlf_node& mediaContainerNode) :
    m_mediaContainerNode(mediaContainerNode)
{
}

std::unique_ptr<IMediaContainer> MediaContainerFactory::create()
{
    int width = static_cast<int>(m_mediaContainerNode.get<float>("<xmlattr>.width"));
    int height = static_cast<int>(m_mediaContainerNode.get<float>("<xmlattr>.height"));
    int zorder = m_mediaContainerNode.get<int>("<xmlattr>.zindex", 0);
    bool loop = m_mediaContainerNode.get<bool>("<options>.loop", false);

    auto container = std::make_unique<MediaContainer>(zorder, std::make_unique<GtkFixedLayoutAdaptor>());
    container->setSize(width, height);
    if(loop)
    {
        container->loopMediaInContainer();
    }
    return container;
}
