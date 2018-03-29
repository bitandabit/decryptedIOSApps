//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCManagedCapturerListener-Protocol.h"

@class NSNumber;
@protocol SCCapturer, SCFeature;

@protocol SCFeatureControl <SCManagedCapturerListener>
+ (id)new;
@property(retain, nonatomic) NSNumber *value;
@property(nonatomic) _Bool canChangeValue;
@property(readonly, nonatomic) __weak id <SCCapturer> capturer;
@property(nonatomic) __weak id <SCFeature> feature;
- (void)setupRecordLifecycleEvents;
- (id)initWithCapturer:(id <SCCapturer>)arg1;
- (id)init;
@end

