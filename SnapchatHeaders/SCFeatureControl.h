//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCFeatureControl-Protocol.h"

@class NSNumber, NSString;
@protocol SCCapturer, SCFeature;

@interface SCFeatureControl : NSObject <SCFeatureControl>
{
    _Bool _canChangeValue;
    id <SCFeature> _feature;
    id <SCCapturer> _capturer;
    NSNumber *_value;
}

@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic) _Bool canChangeValue; // @synthesize canChangeValue=_canChangeValue;
@property(readonly, nonatomic) __weak id <SCCapturer> capturer; // @synthesize capturer=_capturer;
@property(nonatomic) __weak id <SCFeature> feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (void)setupRecordLifecycleEvents;
- (void)dealloc;
- (id)initWithCapturer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

