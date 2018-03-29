//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, SCManagedURL, SCSessionRequestManager, SCTemporaryDatastore, SCUserSession;

@interface SCPostRegistrationVideoProvider : NSObject
{
    SCUserSession *_userSession;
    SCSessionRequestManager *_requestManager;
    SCTemporaryDatastore *_postRegistrationVideoDatastore;
    NSURL *_postRegistrationVideoRemoteURL;
    SCManagedURL *_postRegistrationVideoManagedURL;
}

- (void).cxx_destruct;
- (id)expirationDate;
- (void)createVideoCacheURL;
- (void)savePostRegistrationVideoToCache:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)downloadPostRegistrationVideo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)videoDiskCacheURL;
- (_Bool)doesVideoExistOnDisk;
- (void)fetchVideoFromServerAndSaveToCache;
- (id)initWithUserSession:(id)arg1;

@end
