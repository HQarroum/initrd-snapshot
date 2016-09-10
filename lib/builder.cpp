#include <builder.hpp>

namespace initrd
{
  /**
   * \constructor
   */
  builder_t::builder_t() {}

  /**
   * \brief Adds a new file to the image under
   * construction.
   */
  builder_t& builder_t::addFile(file_t file) {
    mFiles.push_back(file);
    return (*this);
  }

  /**
   * \brief Adds a list of files to the image
   * under construction.
   */
  builder_t& builder_t::addFiles(std::list<file_t> files) {
    std::copy(files.begin(), files.end(),
          std::back_insert_iterator<std::list<T> >(mFiles));
    return (*this);
  }

  /**
   * \return a new image instance built using the
   * previously given file instances.
   */
  const image_t builder_t::build() {
    auto size = mFiles.size();
    mStream.write<uint32_t>(size);
    mStream.write<size * sizeof(header_t)>(
        make_headers());
    for (auto file : mFiles) {
      mStream.write(file.data(), file.size());
    }
    return (mStream.image());
  }
};
