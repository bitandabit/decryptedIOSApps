//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGalleryLagunaContentListener-Protocol.h"

@class NSMutableOrderedSet, NSString, SCGalleryLagunaContentLoader, SCLagunaContent;
@protocol OS_dispatch_queue;

@interface SCAVAssetLagunaContent : NSObject <SCGalleryLagunaContentListener>
{
    NSMutableOrderedSet *_pendingRequests;
    SCLagunaContent *_lagunaContent;
    NSObject<OS_dispatch_queue> *_queue;
    SCGalleryLagunaContentLoader *_contentLoader;
    unsigned long long _contentComponent;
}

- (void).cxx_destruct;
- (_Bool)_handleDataRequest:(id)arg1;
- (void)_processPendingRequests;
- (void)didCancelDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didInterruptDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didPauseForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didFinishDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didReceiveDataForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)cancelResourceLoadingRequest:(id)arg1;
- (void)handleResourceLoadingRequest:(id)arg1;
- (id)initWithLagunaContent:(id)arg1 contentComponent:(unsigned long long)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
