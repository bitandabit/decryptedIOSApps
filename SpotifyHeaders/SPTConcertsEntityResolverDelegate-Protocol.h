//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTConcertsEntity;

@protocol SPTConcertsEntityResolverDelegate <NSObject>
- (void)entityResolver:(id <SPTConcertsEntityResolver>)arg1 didEncounterError:(NSError *)arg2 forToken:(id <SPTConcertsResolverToken>)arg3;
- (void)entityResolver:(id <SPTConcertsEntityResolver>)arg1 didCancelForToken:(id <SPTConcertsResolverToken>)arg2;
- (void)entityResolver:(id <SPTConcertsEntityResolver>)arg1 didResolveEntity:(SPTConcertsEntity *)arg2 forToken:(id <SPTConcertsResolverToken>)arg3;
@end
