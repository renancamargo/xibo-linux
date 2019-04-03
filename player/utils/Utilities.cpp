#include "Utilities.hpp"
#include "XiboApp.hpp"
#include "FilePath.hpp"
#include "ScreenShoter.hpp"

#include <boost/property_tree/xml_parser.hpp>
#include <boost/algorithm/string.hpp>

HttpManager& Utils::httpManager()
{
    return XiboApp::app().httpManager();
}

FileCacheManager& Utils::fileManager()
{
    return XiboApp::app().fileManager();
}

ScreenShoter& Utils::screenShoter()
{
    return XiboApp::app().screenShoter();
}

xml_node Utils::parseXmlFromPath(const FilePath& xlfPath)
{
    xml_node tree;
    boost::property_tree::read_xml(xlfPath.string(), tree);
    return tree;
}

xml_node Utils::parseXmlFromString(const std::string& xml)
{
    std::stringstream stream;
    stream << xml;
    xml_node tree;
    boost::property_tree::read_xml(stream, tree);
    return tree;
}

std::string Utils::xmlTreeToEscapedString(const xml_node& node)
{
    std::stringstream sstream;
    boost::property_tree::write_xml(sstream, node);
    std::string xmlStr = sstream.str();

    boost::replace_all(xmlStr, "<", "&lt;");
    boost::replace_all(xmlStr, ">", "&gt;");

    return xmlStr;
}