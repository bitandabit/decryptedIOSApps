//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTFeatureSettingsItem.h"

@class NSArray;

@interface SPTSubPageGroupFeatureSettingsItem : SPTFeatureSettingsItem
{
    _Bool _groupMemberRequiresRestart;
    NSArray *_children;
}

@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (_Bool)requiresRestart;
- (void)updateRequiresRestart;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 description:(id)arg2 items:(id)arg3 navigationRouter:(id)arg4;

@end

