//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeCoordinator.h"

@class SCAbuseWarningScope, SCAbuseWarningWorkflow, SCBareboneNavigationController, SCSystemScope;

@interface SCAbuseWarningScopeCoordinator : SCScopeCoordinator
{
    SCAbuseWarningWorkflow *_abuseWarningWorkflow;
    SCBareboneNavigationController *_navController;
    SCSystemScope *_systemScope;
    SCAbuseWarningScope *_abuseWarningScope;
}

@property(nonatomic) __weak SCAbuseWarningScope *abuseWarningScope; // @synthesize abuseWarningScope=_abuseWarningScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

@end

