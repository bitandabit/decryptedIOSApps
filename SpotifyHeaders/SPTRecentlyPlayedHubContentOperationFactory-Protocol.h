//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUBContentOperationFactory.h"

@class HUBIdentifier, NSString;

@protocol SPTRecentlyPlayedHubContentOperationFactory <HUBContentOperationFactory>
@property(nonatomic) _Bool shouldReloadAutomatically;
@property(copy, nonatomic) NSString *itemComponentModelIdentifierPrefix;
@property(retain, nonatomic) HUBIdentifier *itemComponentIdentifier;
@property(copy, nonatomic) NSString *containerComponentModelIdentifier;
@property(retain, nonatomic) HUBIdentifier *containerComponentIdentifier;
@end

