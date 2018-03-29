//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchIntent-Protocol.h"

@class NSString, UIView;
@protocol SCPublicContentMiniProfileDataEntry;

@interface SCSearchPublisherProfileIntent : NSObject <SCSearchIntent>
{
    id <SCPublicContentMiniProfileDataEntry> _miniProfileDataEntry;
    CDUnknownBlockType _completionBlock;
    UIView *_sourceView;
}

@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak id <SCPublicContentMiniProfileDataEntry> miniProfileDataEntry; // @synthesize miniProfileDataEntry=_miniProfileDataEntry;
- (void).cxx_destruct;
- (id)initWithMiniProfileDataEntry:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 sourceView:(id)arg3;
- (id)initWithMiniProfileDataEntry:(id)arg1 sourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

