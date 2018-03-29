//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGalleryLagunaContentLoaderRequest-Protocol.h"

@class NSString, SCGalleryLagunaContentLoader, SCSentinel;
@protocol OS_dispatch_queue, SCGalleryLagunaContentLoaderRequest, SCPerforming, SCProgressReceiving;

@interface SCGalleryLagunaContentLoaderDownloadRequest : NSObject <SCGalleryLagunaContentLoaderRequest>
{
    SCGalleryLagunaContentLoader *_contentLoader;
    id <SCPerforming> _performer;
    CDStruct_bac8f6e9 _mediaScenePath;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _resultHandler;
    SCSentinel *_sentinel;
    id <SCGalleryLagunaContentLoaderRequest> _upstreamRequest;
    id <SCProgressReceiving> _progressReceiver;
    unsigned long long _contentComponent;
}

@property(readonly, nonatomic) unsigned long long contentComponent; // @synthesize contentComponent=_contentComponent;
@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
- (void).cxx_destruct;
- (void)performWithStatus:(unsigned long long)arg1 error:(id)arg2;
- (void)downloadPersistedContentWithCloudFile:(id)arg1;
- (_Bool)isCancelled;
- (void)cancel;
- (id)initWithContentLoader:(id)arg1 performer:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 contentComponent:(unsigned long long)arg4 queue:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
