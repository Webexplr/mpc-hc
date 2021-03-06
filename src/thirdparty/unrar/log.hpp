#ifndef _RAR_LOG_
#define _RAR_LOG_

void InitLogOptions(const wchar *LogFileName);

#ifdef SILENT
inline void Log(const wchar *ArcName,const wchar *fmt,...) {}
#else
void Log(const wchar *ArcName,const wchar *fmt,...);
#endif

#endif
