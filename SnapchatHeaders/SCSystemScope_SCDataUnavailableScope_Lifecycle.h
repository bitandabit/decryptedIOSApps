//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCScopeContainer, SCSystemScope_Lifecycle;

@interface SCSystemScope_SCDataUnavailableScope_Lifecycle : SCScopeLifecycle
{
    SCSystemScope_Lifecycle *_parent;
    SCScopeContainer *_dataUnavailableScopeContainer;
}

@property(readonly, nonatomic) SCScopeContainer *dataUnavailableScopeContainer; // @synthesize dataUnavailableScopeContainer=_dataUnavailableScopeContainer;
@property(nonatomic) __weak SCSystemScope_Lifecycle *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)begin;
- (id)rootScopeContainer;
- (void)setRootScope:(id)arg1;
- (void)cleanScopeContainers;
- (void)initializeScopeContainers;

@end

