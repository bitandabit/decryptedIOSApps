//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBCommandModelJSONSchema.h"

@interface EXP_HUBCommandModelJSONSchemaImplementation : NSObject <EXP_HUBCommandModelJSONSchema>
{
    id <EXP_HUBJSONStringPath> _namePath;
    id <EXP_HUBJSONDictionaryPath> _dataPath;
}

@property(retain, nonatomic) id <EXP_HUBJSONDictionaryPath> dataPath; // @synthesize dataPath=_dataPath;
@property(retain, nonatomic) id <EXP_HUBJSONStringPath> namePath; // @synthesize namePath=_namePath;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithNamePath:(id)arg1 dataPath:(id)arg2;
- (id)init;

@end
