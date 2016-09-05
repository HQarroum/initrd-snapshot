#include <initrd/reader.hpp>

namespace initrd
{
  static image_t parse_image()
  {
    auto files_no = parse_files_no(data, size);
    auto header   = parse_header(data, size);
  }

  reader_t::reader_t(const char* data, size_t size)
    : mData(data),
      mSize(size),
      mImage(parse_image(mData, mSize))
  {}

  /**
   * \return a const reference to the internal initrd image
   * parsed from the given buffer.
   */
  const image_t& reader_t::image() const {
    return (mImage);
  }
};