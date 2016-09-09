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

  }

  /**
   * \brief Adds a list of files to the image
   * under construction.
   */
  builder_t& builder_t::addFiles(std::list<file_t> files) {

  }

  /**
   * \return a new image instance built using the
   * previously given file instances.
   */
  const image_t builder_t::build() {

  }
};
