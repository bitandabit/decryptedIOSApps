//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCScopeContainer;

@interface SCSystemScope_Lifecycle : SCScopeLifecycle
{
    SCScopeContainer *_systemScopeContainer;
}

@property(readonly, nonatomic) SCScopeContainer *systemScopeContainer; // @synthesize systemScopeContainer=_systemScopeContainer;
- (void).cxx_destruct;
- (void)begin;
- (id)rootScopeContainer;
- (void)setRootScope:(id)arg1;
- (void)cleanScopeContainers;
- (void)initializeScopeContainers;

@end
