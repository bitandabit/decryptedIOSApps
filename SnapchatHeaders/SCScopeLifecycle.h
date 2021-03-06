//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue, SCAvailableScope, SCScopeCleanup, SCScopeContainer, SCScopeLifecycleCoordinators, SCScopeLifecycleSubLifecycles;

@interface SCScopeLifecycle : NSObject
{
    NSOperationQueue *_operationQueue;
    SCAvailableScope *_availableScope;
    SCScopeLifecycleCoordinators *_coordinators;
    SCScopeLifecycleSubLifecycles *_subLifecycles;
    SCScopeCleanup *_cleanup;
    SCScopeContainer *_rootScopeContainer;
}

@property(readonly, nonatomic) SCScopeContainer *rootScopeContainer; // @synthesize rootScopeContainer=_rootScopeContainer;
- (void).cxx_destruct;
- (id)debugRepresentation;
- (id)end;
- (void)begin;
- (void)cleanScopeContainers;
- (void)initializeScopeContainers;
- (void)setRootScope:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 availableScope:(id)arg2 coordinators:(id)arg3 subLifecycles:(id)arg4;
- (id)initWithOperationQueue:(id)arg1 availableScope:(id)arg2;

@end

