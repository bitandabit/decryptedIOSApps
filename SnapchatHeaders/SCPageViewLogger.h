//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCManagedCapturerListener-Protocol.h"
#import "SCPageViewLoggerProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, SCPerformanceResourceTracker;
@protocol SCPerforming;

@interface SCPageViewLogger : NSObject <SCPageViewLoggerProtocol, SCManagedCapturerListener>
{
    SCPerformanceResourceTracker *_resourceTracker;
    _Bool _shouldLogPageView;
    _Bool _isCameraOn;
    NSMutableDictionary *_recordingPages;
    NSMutableDictionary *_startedPages;
    NSString *_currentPage;
    NSString *_sourcePage;
    id <SCPerforming> _performer;
    NSDictionary *_lastRecordingPages;
}

+ (id)shared;
@property(nonatomic) _Bool isCameraOn; // @synthesize isCameraOn=_isCameraOn;
@property(readonly, nonatomic) NSDictionary *lastRecordingPages; // @synthesize lastRecordingPages=_lastRecordingPages;
@property(nonatomic) _Bool shouldLogPageView; // @synthesize shouldLogPageView=_shouldLogPageView;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSString *sourcePage; // @synthesize sourcePage=_sourcePage;
@property(retain, nonatomic) NSString *currentPage; // @synthesize currentPage=_currentPage;
@property(readonly, nonatomic) NSMutableDictionary *startedPages; // @synthesize startedPages=_startedPages;
@property(readonly, nonatomic) NSMutableDictionary *recordingPages; // @synthesize recordingPages=_recordingPages;
- (void).cxx_destruct;
- (id)ownerForPage:(id)arg1;
- (id)pageToOwnerMappingDict;
- (id)getCurrentPage;
- (id)getSourcePage;
- (void)testAndRemoveStartedPage:(id)arg1;
- (void)addStartedPage:(id)arg1;
- (void)_logPageViewSession:(id)arg1 withCpuUsageDict:(id)arg2 memoryUsageDict:(id)arg3 memoryWiredUsageDict:(id)arg4 memoryVirtualUsageDict:(id)arg5;
- (void)endPageView:(id)arg1 withEndTime:(double)arg2 exitEvent:(long long)arg3;
- (void)endAllRecordingPageViewsWithExitEvent:(long long)arg1;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive;
- (void)didPullCpuUsage:(double)arg1;
- (void)pullMemoryUsage;
- (void)managedCapturer:(id)arg1 didStopRunning:(id)arg2;
- (void)managedCapturer:(id)arg1 didStartRunning:(id)arg2;
- (void)gpsDidStop:(id)arg1;
- (void)gpsDidStart:(id)arg1;
- (void)endPageView:(id)arg1 withExitEvent:(long long)arg2;
- (void)endPageView:(id)arg1;
- (void)startPageView:(id)arg1 fromReferrer:(id)arg2;
- (void)startPageView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

