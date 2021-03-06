//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCQueuePerformer;

@interface SCGalleryFaceAnalyzer : NSObject
{
    SCQueuePerformer *_performer;
    unsigned long long _concurrentUsers;
    struct shared_ptr<face::Analyzer> _faceAnalyzer;
}

+ (_Bool)isModelReady;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_analyze:(id)arg1;
- (id)analyze:(id)arg1;
- (void)_bootUp;
- (void)dealloc;
- (void)_tearDown;
- (void)_runBlockWhenModelAvailable:(CDUnknownBlockType)arg1;
- (id)init;

@end

