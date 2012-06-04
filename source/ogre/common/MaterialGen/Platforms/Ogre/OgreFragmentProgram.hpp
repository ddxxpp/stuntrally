#ifndef SH_OGREFRAGMENTPROGRAM_H
#define SH_OGREFRAGMENTPROGRAM_H

#include <string>

#include <OgreHighLevelGpuProgram.h>

#include "../../Platform.hpp"

namespace sh
{
	class OgreFragmentProgram : public FragmentProgram
	{
	public:
		OgreFragmentProgram (
			const std::string& name, const std::string& entryPoint,
			const std::string& source, const std::string& lang,
			const std::string& resourceGroup);
	private:
		Ogre::HighLevelGpuProgramPtr mProgram;
	};
}

#endif
