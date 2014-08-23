/**
 * Copyright © 2012 Kirill Gavrilov <kirill@sview.ru>
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file license-boost.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef __StGLCore40_h_
#define __StGLCore40_h_

#include <StGLCore/StGLCore33.h>

/**
 * OpenGL 4.0 defintion.
 */
template<typename theBaseClass_t>
struct stglTmplCore40 : public theBaseClass_t {

#if !defined(GL_ES_VERSION_2_0)

        public: //! @name GL_ARB_draw_indirect (added to OpenGL 4.0 core)

    using theBaseClass_t::glDrawArraysIndirect;
    using theBaseClass_t::glDrawElementsIndirect;

        public: //! @name GL_ARB_gpu_shader_fp64 (added to OpenGL 4.0 core)

    using theBaseClass_t::glUniform1d;
    using theBaseClass_t::glUniform2d;
    using theBaseClass_t::glUniform3d;
    using theBaseClass_t::glUniform4d;
    using theBaseClass_t::glUniform1dv;
    using theBaseClass_t::glUniform2dv;
    using theBaseClass_t::glUniform3dv;
    using theBaseClass_t::glUniform4dv;
    using theBaseClass_t::glUniformMatrix2dv;
    using theBaseClass_t::glUniformMatrix3dv;
    using theBaseClass_t::glUniformMatrix4dv;
    using theBaseClass_t::glUniformMatrix2x3dv;
    using theBaseClass_t::glUniformMatrix2x4dv;
    using theBaseClass_t::glUniformMatrix3x2dv;
    using theBaseClass_t::glUniformMatrix3x4dv;
    using theBaseClass_t::glUniformMatrix4x2dv;
    using theBaseClass_t::glUniformMatrix4x3dv;
    using theBaseClass_t::glGetUniformdv;

        public: //! @name GL_ARB_shader_subroutine (added to OpenGL 4.0 core)

    using theBaseClass_t::glGetSubroutineUniformLocation;
    using theBaseClass_t::glGetSubroutineIndex;
    using theBaseClass_t::glGetActiveSubroutineUniformiv;
    using theBaseClass_t::glGetActiveSubroutineUniformName;
    using theBaseClass_t::glGetActiveSubroutineName;
    using theBaseClass_t::glUniformSubroutinesuiv;
    using theBaseClass_t::glGetUniformSubroutineuiv;
    using theBaseClass_t::glGetProgramStageiv;

        public: //! @name GL_ARB_tessellation_shader (added to OpenGL 4.0 core)

    using theBaseClass_t::glPatchParameteri;
    using theBaseClass_t::glPatchParameterfv;

        public: //! @name GL_ARB_transform_feedback2 (added to OpenGL 4.0 core)

    using theBaseClass_t::glBindTransformFeedback;
    using theBaseClass_t::glDeleteTransformFeedbacks;
    using theBaseClass_t::glGenTransformFeedbacks;
    using theBaseClass_t::glIsTransformFeedback;
    using theBaseClass_t::glPauseTransformFeedback;
    using theBaseClass_t::glResumeTransformFeedback;
    using theBaseClass_t::glDrawTransformFeedback;

        public: //! @name GL_ARB_transform_feedback3 (added to OpenGL 4.0 core)

    using theBaseClass_t::glDrawTransformFeedbackStream;
    using theBaseClass_t::glBeginQueryIndexed;
    using theBaseClass_t::glEndQueryIndexed;
    using theBaseClass_t::glGetQueryIndexediv;

        public: //! @name OpenGL 4.0 additives to 3.3

    using theBaseClass_t::glMinSampleShading;
    using theBaseClass_t::glBlendEquationi;
    using theBaseClass_t::glBlendEquationSeparatei;
    using theBaseClass_t::glBlendFunci;
    using theBaseClass_t::glBlendFuncSeparatei;

#endif

};

/**
 * OpenGL 4.0 compatibility profile.
 */
typedef stglTmplCore40<StGLCore33Back> StGLCore40Back;

/**
 * OpenGL 4.0 core profile.
 */
typedef stglTmplCore40<StGLCore33>     StGLCore40;

#endif // __StGLCore40_h_
