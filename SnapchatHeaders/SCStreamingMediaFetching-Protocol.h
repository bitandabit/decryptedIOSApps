//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSURL, SCSearchStreamingEncryptionInfo;
@protocol OS_dispatch_queue;

@protocol SCStreamingMediaFetching <NSObject>
- (void)fetchLocalMediaURLForMediaURL:(NSURL *)arg1 encryptionInfo:(SCSearchStreamingEncryptionInfo *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSError *, NSURL *))arg4;
- (void)fetchMediaDataForMediaURL:(NSURL *)arg1 encryptionInfo:(SCSearchStreamingEncryptionInfo *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSError *, NSData *))arg4;
@end

