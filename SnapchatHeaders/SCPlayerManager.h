//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface SCPlayerManager : NSObject
{
    NSHashTable *_allocatedPlayers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)snapshot;
- (void)registerPlayer:(id)arg1;
- (id)init;

@end
