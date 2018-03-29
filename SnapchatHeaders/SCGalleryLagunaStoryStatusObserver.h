//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGalleryLagunaContentListener-Protocol.h"

@class NSArray, NSString, SCLagunaContent, SCUserSession;
@protocol SCGalleryEntry, SCGalleryLagunaStoryStatusObserverDelegate, SCObserving;

@interface SCGalleryLagunaStoryStatusObserver : NSObject <SCGalleryLagunaContentListener>
{
    id <SCGalleryEntry> _entry;
    SCUserSession *_userSession;
    id <SCGalleryLagunaStoryStatusObserverDelegate> _delegate;
    NSArray *_loaders;
    id <SCObserving> _entryObserveContext;
    _Bool _observingStatus;
    unsigned long long _observeComponents;
    SCLagunaContent *_currentlyLoadingContent;
}

+ (id)dispatchQueue;
- (void).cxx_destruct;
- (id)_logStringForStatus:(long long)arg1;
- (void)dealloc;
- (void)didCancelDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didInterruptDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didFinishDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didPauseForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didReceiveDataForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)_calculateCurrentStateForCurrentlyLoadingContent:(id)arg1;
- (void)_calculateCurrentStateWithLatestEntry:(id)arg1 latestLoaders:(id)arg2;
- (void)stopObservingStatus;
- (void)startObservingStatus;
- (void)setDelegate:(id)arg1;
- (id)initWithEntry:(id)arg1 observeComponents:(unsigned long long)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

