//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBContentOperation.h"
#import "NSObject.h"

@class EXP_HUBIdentifier, NSString;

@protocol EXP_SPTRecentlyPlayedHubContentOperation <NSObject, EXP_HUBContentOperation>
@property(nonatomic) _Bool shouldReloadAutomatically;
@property(copy, nonatomic) NSString *itemComponentModelIdentifierPrefix;
@property(retain, nonatomic) EXP_HUBIdentifier *itemComponentIdentifier;
@property(copy, nonatomic) NSString *containerComponentModelIdentifier;
@property(retain, nonatomic) EXP_HUBIdentifier *containerComponentIdentifier;
@end

