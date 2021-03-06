/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSMutableSet, NSSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
    NSSet *_collectionPropertiesToFetch;
    unsigned int _entityOrder;
    NSMutableSet *_filterPredicates;
    int _groupingType;
    BOOL _ignoreSystemFilterPredicates;
    NSSet *_itemPropertiesToFetch;
    NSArray *_orderingProperties;
    BOOL _useSections;
}

@property(copy) NSSet * collectionPropertiesToFetch;
@property unsigned int entityOrder;
@property(readonly) BOOL excludesEntitiesWithBlankNames;
@property(copy) NSSet * filterPredicates;
@property int groupingType;
@property BOOL ignoreSystemFilterPredicates;
@property(copy) NSSet * itemPropertiesToFetch;
@property(copy) NSArray * orderingProperties;
@property(readonly) BOOL specifiesPlaylistItems;

- (void).cxx_destruct;
- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingProperties:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)ML3OrderingPropertiesForGroupingType:(int)arg1;
- (id)ML3OrderingPropertiesForMPOrderingProperties:(id)arg1;
- (void)addFilterPredicate:(id)arg1;
- (void)addFilterPredicates:(id)arg1;
- (id)collectionPropertiesToFetch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)entityOrder;
- (BOOL)excludesEntitiesWithBlankNames;
- (id)filterPredicates;
- (int)groupingType;
- (unsigned int)hash;
- (BOOL)ignoreSystemFilterPredicates;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)itemPropertiesToFetch;
- (id)orderingProperties;
- (id)predicateForProperty:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (void)setEntityOrder:(unsigned int)arg1;
- (void)setFilterPredicates:(id)arg1;
- (void)setGroupingType:(int)arg1;
- (void)setIgnoreSystemFilterPredicates:(BOOL)arg1;
- (void)setItemPropertiesToFetch:(id)arg1;
- (void)setOrderingProperties:(id)arg1;
- (BOOL)specifiesPlaylistItems;

@end
