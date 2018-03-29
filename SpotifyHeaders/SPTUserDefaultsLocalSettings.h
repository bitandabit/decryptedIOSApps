//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLocalSettings.h"

@class NSMapTable, NSNotificationCenter, NSString, NSUserDefaults;

@interface SPTUserDefaultsLocalSettings : NSObject <SPTLocalSettings>
{
    _Bool _dispatchedSave;
    NSUserDefaults *_userDefaults;
    NSString *_username;
    NSString *_featureIdentifier;
    NSMapTable *_observers;
    NSNotificationCenter *_notificationCenter;
}

@property(nonatomic) _Bool dispatchedSave; // @synthesize dispatchedSave=_dispatchedSave;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *identifier;
- (id)allKeys;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)storageNameForSetting:(id)arg1;
- (id)storagePrefix;
- (void)invokeObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
- (id)initWithUserDefaults:(id)arg1 username:(id)arg2 featureIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

