//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTServiceOrchestrator;

@protocol SPTServiceOrchestratorDelegate <NSObject>
- (void)serviceOrchestrator:(SPTServiceOrchestrator *)arg1 didUnloadServicesForScope:(long long)arg2;
- (void)serviceOrchestrator:(SPTServiceOrchestrator *)arg1 willUnloadServicesForScope:(long long)arg2;
- (void)serviceOrchestrator:(SPTServiceOrchestrator *)arg1 didLoadServicesForScope:(long long)arg2;
- (void)serviceOrchestrator:(SPTServiceOrchestrator *)arg1 willLoadServicesForScope:(long long)arg2;
@end

