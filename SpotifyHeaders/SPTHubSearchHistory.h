//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface SPTHubSearchHistory : NSObject
{
    id <SPTLocalSettings> _localSettings;
    NSMutableArray *_searchObjects;
}

@property(retain, nonatomic) NSMutableArray *searchObjects; // @synthesize searchObjects=_searchObjects;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (id)readHistoryFromLocalSettings;
- (void)saveHistoryToLocalSettings;
@property(readonly, nonatomic) NSArray *allSearchObjects;
- (void)clear;
- (id)searchObjectAtIndex:(unsigned long long)arg1;
- (void)removeSearchObjectAtIndex:(unsigned long long)arg1;
- (void)addSearchObject:(id)arg1;
- (id)initWithLocalSettings:(id)arg1;

@end
