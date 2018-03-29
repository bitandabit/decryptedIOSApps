//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol SCGallerySnap;

@protocol SCMediaDownloadLogger <NSObject>
- (void)logGetSnapsError:(id <SCGallerySnap>)arg1 getSnapResponse:(NSString *)arg2;
- (void)downloadStartedWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
- (void)downloadQueuedWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
- (void)setSceneWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
- (void)endGCSDownloadWithURL:(NSURL *)arg1 succeeded:(_Bool)arg2 dataSizeInBytes:(unsigned long long)arg3 statusCode:(long long)arg4 params:(NSDictionary *)arg5;
- (void)beginGCSDownloadWithURL:(NSURL *)arg1 snapId:(NSString *)arg2 dataSizeInBytes:(unsigned long long)arg3 objectType:(long long)arg4;
- (void)endDownloadWithToken:(NSString *)arg1 URL:(NSURL *)arg2 succeeded:(_Bool)arg3 dataSizeInBytes:(unsigned long long)arg4 statusCode:(long long)arg5 params:(NSDictionary *)arg6;
- (NSString *)beginDownloadWithSnapId:(NSString *)arg1 URL:(NSURL *)arg2 dataSizeInBytes:(unsigned long long)arg3 objectType:(long long)arg4;
@end

