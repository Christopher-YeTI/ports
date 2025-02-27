--- ui/views/window/dialog_delegate.cc.orig	2024-10-16 21:32:40 UTC
+++ ui/views/window/dialog_delegate.cc
@@ -105,7 +105,7 @@ bool DialogDelegate::CanSupportCustomFrame(gfx::Native
 
 // static
 bool DialogDelegate::CanSupportCustomFrame(gfx::NativeView parent) {
-#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)) && \
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)) && \
     BUILDFLAG(ENABLE_DESKTOP_AURA)
   // The new style doesn't support unparented dialogs on Linux desktop.
   return parent != nullptr;
