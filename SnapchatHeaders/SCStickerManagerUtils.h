//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCStickerManagerUtils : NSObject
{
}

+ (void)_retryDownloadFileWithUrl:(id)arg1 performer:(id)arg2 retryCount:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)downloadFileWithURL:(id)arg1 performer:(id)arg2 retryCount:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (_Bool)deviceDoesSupportEmoji:(id)arg1;
+ (id)hexStringFromEmoji:(id)arg1;
+ (id)emojiFromHexStringWithoutReadding:(id)arg1;
+ (id)emojiFromHexString:(id)arg1;
+ (id)rootPath;
+ (id)absolutePathForPath:(id)arg1;
+ (void)listDirectory:(id)arg1;
+ (void)listRootPath;
+ (_Bool)unzipData:(id)arg1 destination:(id)arg2;
+ (_Bool)saveData:(id)arg1 destination:(id)arg2;
+ (_Bool)removeFile:(id)arg1;
+ (_Bool)createFolder:(id)arg1;

@end

