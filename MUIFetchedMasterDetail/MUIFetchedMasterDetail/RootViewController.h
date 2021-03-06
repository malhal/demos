//
//  RootViewController.h
//  MUIFetchedMasterDetail
//
//  Created by Malcolm Hall on 13/09/2019.
//  Copyright © 2019 Malcolm Hall. All rights reserved.
//

#import <MMShared/MMShared.h>
#import <CoreData/CoreData.h>
#import "MUIFetchedMasterDetail+CoreDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@class MasterViewController, PersistentContainer;

@interface RootViewController : UITableViewController //

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@property (strong, nonatomic) MasterViewController *masterViewController;

//@property (weak, nonatomic) IBOutlet MMSFetchedTableViewController *fetchedResultsTableViewControllerImpl;



@end

NS_ASSUME_NONNULL_END
